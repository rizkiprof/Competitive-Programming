type
	telpon =record
		nama:string;
		no:array[1..6] of char;
end;

var
A:array[1..100001] of telpon;
kiri,kanan,hasil,tengah,i,j,n,k,q: longint;
c:char;
x:string;

begin
	readln(n,q);
	for i:=1 to n do begin
		readln(x);
		j:=1;
		A[i].nama:='';
		A[i].no:='';
		while x[j]<>' ' do begin
			A[i].nama:= A[i].nama + x[j];
			j:=j+1;
		end;
		for k:=j+1 to length(x) do begin
			A[i].no[k-j]:=x[k];
		end;
	end;

	for i:=1 to q do begin
		readln(x);
		hasil:=0;
		kiri:=1;
		kanan:=n;
		while(kiri<=kanan) and(hasil=0) do begin
			tengah:= (kiri+kanan ) div 2; 
			if x < A[tengah].nama then  begin
				kanan:=tengah-1;
			end else if x>A[tengah].nama then begin
				kiri:=tengah+1;
			end else begin
				hasil:=tengah;
			end
		end;
		if(x=A[hasil].nama) then writeln(A[hasil].no)
		else writeln('NIHIL');
	end;
end.