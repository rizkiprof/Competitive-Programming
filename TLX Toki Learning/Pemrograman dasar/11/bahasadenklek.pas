var
s:string;
c:char;
i,k:integer;

begin
	readln(s);
//	write(ord('a'),' ',ord('A'));
	for i:=1 to length(s) do begin
		if (ord(s[i])>90) then begin
			s[i]:=char(ord(s[i])-32);
		end
		else s[i]:=char(ord(s[i])+32);
	end;
	writeln(s);
end.