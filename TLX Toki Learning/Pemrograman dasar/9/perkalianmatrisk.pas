var 
A,B: array[1..101,1..101] of integer;
p,m,n,i,j,k:integer;
nilai:longint;
begin
	readln(n,m,p);
	
	for i:=1 to n do begin
		for j:=1 to m do begin
			read (A[i][j]);
		end;
	end;
	
	for i:=1 to m do begin
		for j:=1 to p do begin
			read (B[i][j]);
		end;
	end;
	
	for i:=1 to n do begin
		for j:=1 to p do begin
			nilai:=0;
			for k:=1 to m do begin
				nilai+=A[i][k]*B[k][j];
			end;
			write(nilai);
			if(j=p) then writeln()
			else write(' ');
		end;
	end;
end.