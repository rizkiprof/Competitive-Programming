var
a,max,i: longint;
pangkat:array [2..1000000] of integer;

procedure faktor ( x:longint);
var i,tmp:longint;
begin
	tmp:=x;
	i:=2;
	while(tmp>1) do begin
		while tmp mod i =0 do begin
			pangkat[i]+=1;
			tmp := tmp div i;
		end;
		max:=i;
		inc(i);
	end;
end;	

begin
	readln(a);
	faktor(a);
	for i:=2 to max do begin
		if(pangkat[i]>0) then begin 
			write(i);
			if(pangkat[i]>1)then write('^',pangkat[i]);
			if(i<max) then write(' x ') 
			else writeln();
		end;
	end;
end.