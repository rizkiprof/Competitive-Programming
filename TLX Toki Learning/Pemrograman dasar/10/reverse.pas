var
a,b,n,i: longint;

function reverse ( x:longint) :longint;
var tmp,ret:longint;
begin
	tmp:=x;
	ret:=0;
	while(tmp>0) do begin
		ret:= (ret*10) + (tmp mod 10);
		tmp := tmp div 10;
	end;
	reverse:=ret;
end;	

begin
	readln(a,b);
	writeln(reverse(reverse(a)+reverse(b)));
end.