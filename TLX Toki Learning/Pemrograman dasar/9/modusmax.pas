var 
aii: array[1..100000] of longint;
arr: array[1..100000] of integer;
n,i,max,keluar:longint;

begin
	max:=0;
	readln(n);
	
	for i:=1 to n do begin
		aii[i]:=0;
	end;
	for i:=1 to n do begin
		read (arr[i]);
		aii[arr[i]]+=1;
	end;
	for i:=1 to 100000 do begin
		if max <= aii[i] then  begin
			max:=aii[i];
			keluar:=i;
		end;
	end;
	writeln(keluar);
end.