.model small
.stack 100h
.data
.code
main proc
mov cx, 5
L1:
 push cx
 mov cx,3
 L2:
 Mov dl,'*'
 mov ah,2
 int 21h
 loop L2
mov dl,10
mov ah, 2
int 21h
mov dl,13
mov ah, 2
int 21h
Inc bx
pop cx
loop L1
mov ah,4ch
int 21h
main endp
end main