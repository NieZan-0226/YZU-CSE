.globl main
.eqv MAX_TIME	100
.data
	Input0:		.string"Input a number:\n"
	Output0:		.string"The damage:\n"
.text
main:
	li s0, MAX_TIME
	
	la a0, Input0
	li a7, 4 		#print Input0 string
	ecall
	li a7,5 		#read input
	ecall
	bge a0, s0, End		#x >= 100
	
	jal function
	
	mv t0, a0		#a0 temp to t0
	la a0, Output0
	li a7, 4
	ecall
	mv a0, t0
	li a7, 1
	ecall
End:
	li a7, 10
	ecall
	
function:
	bltz a0, function6	#x < 0
	beqz a0, function5	#x == 0
	
	addi t0, a0, -1
	beqz t0, function4	#x == 1
	
	addi t0, t0, -10
	bltz t0, function1	#1 < x <= 10
	
	addi t0, t0, -10
	bltz t0, function2	#10 < x <= 20
	
	beqz zero, function3	#x > 20
function1:
	addi sp, sp, -8		# make room for two 32-bit words on stack
	sw a0, 0(sp)		# save x
	sw ra, 4(sp)		#save return address
	
	addi a0, a0, -1
	jal function		#f(x-1)
	
	lw t1, 0(sp)		#get  x
	sw a0, 0(sp)		#store f(x-1) 
	addi a0, t1, -2
	jal function		#f(x-2)
	
	lw t1, 0(sp)		#get f(x-1)
	add a0, a0, t1		#f(x-2) + f(x-1)
	
	lw ra, 4(sp)		#get return address
	addi sp, sp, 8		#reset stack
	ret
function2:
	addi sp, sp, -8		# make room for two 32-bit words on stack
	sw a0, 0(sp)		# save x
	sw ra, 4(sp)		#save return address
	
	addi a0, a0, -2
	jal function		#f(x-2)
	
	lw t1, 0(sp)		#get  x
	sw a0, 0(sp)		#store f(x-2) 
	addi a0, t1, -3
	jal function		#f(x-3)
	
	lw t1, 0(sp)		#get f(x-2)
	add a0, a0, t1		#f(x-3) + f(x-2)
	
	lw ra, 4(sp)		#get return address
	addi sp, sp, 8		#reset stack
	ret
function3:
	addi sp, sp, -8		# make room for two 32-bit words on stack
	sw a0, 0(sp)		# save x
	sw ra, 4(sp)		#save return address
	
	addi t1, zero, 5
	div a0, a0, t1		#f(x/5)
	jal function
	
	lw t0, 0(sp)		#get x
	addi t1, zero, 2
	mul t0, t0, t1		#2x
	
	add a0, a0, t0		#2x + f(x/5)
	
	lw ra, 4(sp)		#get return address
	addi sp, sp, 8		#reset stack
	ret
function4:
	addi a0, zero, 5
	ret
function5:
	addi a0, zero, 1
	ret
function6:
	addi a0, zero, -1
	ret
	
	
	
