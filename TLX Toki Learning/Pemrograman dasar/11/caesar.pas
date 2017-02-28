var
s:string;
c:char;
i,k:integer;

begin
	readln(s);
	readln(k);
	for i:=1 to length(s) do begin
		s[i]:= char(ord(s[i])+k);
		if(s[i]>'z') then 
			s[i]:= char(ord(s[i])-26);
	end;

	writeln(s);
end.