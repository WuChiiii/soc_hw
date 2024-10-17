`include "defines.v"

module exe(
    input wire rst_i,
    
    //from id_exe
    input wire[`DATA_WIDTH-1:0] op1_i,
    input wire[`DATA_WIDTH-1:0] op2_i,
    input wire reg_we_i,
    input wire[`RADDR_WIDTH-1:0] reg_waddr_i,
    input wire[`RDATA_WIDTH-1:0] inst_i,
    //to exe_mem
    output reg[`RADDR_WIDTH-1:0] reg_waddr_o,
    output reg reg_we_o,
    output reg[`RDATA_WIDTH-1:0] reg_wdata_o
);
    wire[`RDATA_WIDTH-1:0] r_reg_wdata_o;
    wire r_reg_we_o;
    wire[6:0] opcode = inst_i[6:0];
    wire[2:0] funct3 = inst_i[14:12];
    wire[6:0] funct7 = inst_i[31:25];

    exe_type_r exe_type_r0(
        .rst_i(rst_i),
        .inst_i(inst_i),
        .op1_i(op1_i),
        .op2_i(op2_i),
        .reg_wdata_o(r_reg_wdata_o),
        .reg_we_o(r_reg_we_o)
     );

    always @(*) begin
        if (rst_i == 1) begin
            reg_waddr_o = `ZERO_REG;
            reg_wdata_o = `ZERO;
            reg_we_o = `WRITE_DISABLE;
        end 
        else begin
            reg_waddr_o = `ZERO_REG;
            reg_wdata_o = `ZERO;
            reg_we_o = reg_we_i;

            case (opcode)
                `INST_TYPE_I:begin
                    case(funct3)
                        `INST_OR: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i | op2_i;
                        end//ORI
                        `INST_ADD_SUB:begin
                            reg_waddr_o = reg_waddr_i;
                            if(funct7==0) begin
                                reg_wdata_o = op1_i + op2_i;
                            end else begin
                                reg_wdata_o = op1_i + (~op2_i+1);
                            end
                        end
                        `INST_SLT:begin
                            reg_waddr_o = reg_waddr_i;
                            if(op1_i[31]==1 && op2_i[31]==0)begin//rt=1
                                 reg_wdata_o = 1;
                            end else if(op1_i[31]==0 && op2_i[31]==1)begin //rt=0
                                reg_wdata_o = 0;
                            end else begin
                                if(op1_i<op2_i)begin//rt=1
                                 reg_wdata_o = 1;
                                end else begin //rt=0
                                reg_wdata_o = 0;
                                end
                            end
                        end
                        `INST_SLTU:begin
                            reg_waddr_o = reg_waddr_i;
                            if(op1_i<op2_i)begin//rt=1
                                 reg_wdata_o = 1;
                            end else begin //rt=0
                                reg_wdata_o = 0;
                            end
                        end
                        `INST_XOR:begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i ^ op2_i;
                        end
                        `INST_AND:begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i & op2_i;
                        end
                        `INST_SLL:begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i << op2_i[4:0];
                        end
                        `INST_SR:begin//SRAI+SRLI
                            reg_waddr_o = reg_waddr_i;
                            if(funct7==0) begin
                                reg_wdata_o = op1_i >> op2_i[4:0];
                            end else begin
                                reg_wdata_o = $signed(op1_i) >>> op2_i[4:0];
                            end
                        end
                        default: begin
                        end//default
                    endcase
  		        end
                `INST_TYPE_R_M:begin //Type_r and M
                    reg_waddr_o = reg_waddr_i;
                    reg_wdata_o = r_reg_wdata_o;
                    reg_we_o = r_reg_we_o;
                end
                default:begin
                end 
            endcase
        end //if
    end //always

endmodule