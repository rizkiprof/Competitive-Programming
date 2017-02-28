var 
a,n,i,max,min :longint;

begin
	max:=-100000;
	min:=100000;
	readln(a);
	for i:=1 to a do begin
		read (n);
		if n>max then max:=n;
		if n<min then min :=n;
	end;
	writeln(max,' ',min);
end.