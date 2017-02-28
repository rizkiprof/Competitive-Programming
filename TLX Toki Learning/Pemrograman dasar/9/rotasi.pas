var 
arr: array[1..101,1..101] of integer;
m,n,i,j:integer;

begin
	readln(n,m);
	
	for i:=1 to n do begin
		for j:=1 to m do begin
			read (arr[i][j]);
		end;
	end;
	for i:=1 to m do begin
		for j:=1 to n do begin
			write(arr[n+1-j][i]);
			if j=n then begin
				writeln();
			end
			else write(' ');
		end;
	end;
end.