var 
a:double;

begin
	readln(a);
	if(trunc(a)=a) then begin
		writeln(trunc(a),' ',trunc(a));
	end
	else if a>0 then begin
		writeln(trunc(a),' ', trunc(a)+1 );
	end else writeln(trunc(a)-1,' ',trunc(a));
end.
	