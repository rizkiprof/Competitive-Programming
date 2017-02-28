var
B,A:array[1..101,1..101] of longint;
C:array[1..101,1..101] of boolean;
i,j,n,m,k:longint;
udah:boolean;

begin
	udah:=false;
	readln(n,m,k);
	for i:=1 to n do begin
		for j:=1 to m do begin
			read(A[i][j]);
			B[i][j]:=1;
		end;
	end;
	for i:=1 to n do begin
		for j:=1 to m do begin
			if(i>1) then B[i][j]:=B[i][j]*A[i-1][j];
			if(i<n) then B[i][j]:=B[i][j]*A[i+1][j];
			if(j<m) then B[i][j]:=B[i][j]*A[i][j+1];
			if(j>1) then B[i][j]:=B[i][j]*A[i][j-1];
			if(B[i][j]=k) then C[i][j]:=true; 
		end;
	end;
	
	for j:=1 to m do begin
		for i:=1 to n do begin
			if(C[i][j]) then begin writeln(i,' ',j); udah:=true; break; end; 
		end;
		if(udah) then break;
	end;
	
	if not(udah) then writeln(0 ,' ',0);
	
end.