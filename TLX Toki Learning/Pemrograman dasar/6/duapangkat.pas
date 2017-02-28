var
 tot, a : longint;
b:boolean;
begin
	readln(a);
	while (a mod 2=0) do begin
		a:=a div 2;
	end;
	if a=1 then begin 
		writeln('ya');
	end else writeln('bukan');
	
end.