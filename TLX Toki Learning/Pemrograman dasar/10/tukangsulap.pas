var 
A,B: array[1..1001] of longint;
n,i,q,x,y:longint;
aa,c,bb:char;

procedure swap(var d,e:longint) ;
var tmp:longint;
begin
	tmp:=d;
	d:=e;
	e:=tmp;
end;

begin
	readln(n);
	for i:=1 to n do read(A[i]);
	for i:=1 to n do read(B[i]);
	readln(q);
	for i:=1 to q do begin
		readln (aa, x ,c, bb , y);
		
		if(aa='A') then begin
			if bb='B' then
				swap(A[x],B[y])
			else swap(A[x],A[y]);
		end
		else begin
			if(bb='B') then 
			swap(B[x],B[y])
			else swap(B[x],A[y]);
		end;
	end;
	
	for i:=1 to n do begin
		write(A[i]);
		if(i<>n) then write(' ')
		else writeln();
	end;
	for i:=1 to n do begin
		write(B[i]);
		if(i<>n) then write(' ')
		else writeln();
	end;
end.