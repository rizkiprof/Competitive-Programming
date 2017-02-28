var
a,i,k:byte;

begin
	readln(a,k);
	for i := 1 to a do begin
		if(i mod k <>0) then begin
			write(i);
		end else write('*');
		if i<> a then write (' ');
	end;
	writeln();
end.