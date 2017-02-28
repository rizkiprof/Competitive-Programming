var
n,a,i,j : longint;
prima : boolean;

begin
	readln (n);
	for j:=1 to n do begin
		readln(a);
		prima := true;
		for i:=2 to trunc(sqrt(a)) do begin
			if a mod i = 0 then begin 
				prima := false ;
				break;
			end; 
		end;
		if a=1 then writeln('BUKAN')
		else if prima then writeln('YA')
		else writeln('BUKAN');
	end;
end.