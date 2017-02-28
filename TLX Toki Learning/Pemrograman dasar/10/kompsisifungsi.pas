var 
a,b,k,x,i: longint;

function f(var w :longint) : longint;
begin
	w:=abs(a*x+b);
	f:=w;
end;

begin
	readln(a,b,k,x);
	for i :=1 to k do begin
		f(x);
	end;
	writeln(x);
end.