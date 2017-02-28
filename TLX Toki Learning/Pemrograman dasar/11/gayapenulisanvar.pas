var
s,p:string;
c:char;
i,k:integer;

begin
	readln(s);
	if pos('_',s)<>0 then begin
		while(pos('_',s)<>0) do begin
			i:=pos('_',s);
			delete(s,i,1);
			s[i] := char(ord(s[i])-32);
		end;
	end
	else begin
		i:=1;
		while i<=length(s) do begin
			if(ord(s[i])<96) then begin	
				insert('_',s,i);
				s[i+1]:=char(ord(s[i+1])+32);
			end;
			inc(i);
		end;
	end;
	writeln(s);
	
end.