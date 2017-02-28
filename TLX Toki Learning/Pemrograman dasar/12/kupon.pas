var
A:array [1..1000]of longint;
i,j,n:integer;
hasil,x, min:longint;
begin
	min:=1000000;
	hasil:=1000000;
	readln(n,x);
	for i:=1 to n do begin
		read(A[i]);
		if (abs(A[i]-x) < min) then begin
			min:=abs(A[i]-x);
			hasil:=A[i];			
		end
		else if (abs(A[i]-x) = min) then begin
			if hasil>A[i] then
			hasil:=A[i];
		end;
//		writeln(i,' ',hasil,' ',min);
	end;
	writeln(hasil);
end.