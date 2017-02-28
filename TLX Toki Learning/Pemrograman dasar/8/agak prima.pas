var
cnt,n,a,i,j : longint;
prima : boolean;

begin
	readln (n);
	for j:=1 to n do begin
		readln(a);
		cnt:=0;
		prima:=true;
		for i:=2 to trunc(sqrt(a)) do begin
			if a mod i = 0 then begin 
				inc(cnt);
				if(cnt>1) then begin
					prima := false ;
					break;
				end;
			end; 
		end;
		if prima then writeln('YA')
		else writeln('BUKAN');
	end;
end.