var
s,t:string;

procedure cari (s,t:string);
begin
	while( pos(t,s)<>0) do begin
		delete(s,pos(t,s),length(t));
	end;
	writeln(s);
end;
begin
	read(s);
	t:=copy(s,pos(' ',s)+1,length(s)-pos(' ',s));
	delete(s,pos(' ',s),length(s)-pos(' ',s)+1);

	
	cari(s,t);
end.
