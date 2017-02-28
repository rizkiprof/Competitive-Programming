
var
B : array [-1..100002] of longint;
A : array [-1..100002] of longint;
i,j,n,x,y,q,kiri,kanan,tengah,hasil1,hasil2 : longint;
kipas: boolean;

begin
	readln(n);
	
	j:=1; A[0]:=0;
	for i:=1 to n do B[i]:=0;
	
	for i:=1 to n do begin
		read(x);
		if(x<>B[j-1]) then begin A[j-1]:=i-1; B[j]:=x; inc(j); end;
	end;
	A[j-1]:=n;
	//for i:=1 to j do writeln(i,' : ',B[i],' / ',A[i]);
	
	B[j]:=1000000001;
	B[0]:=-1;
	readln(q);
	for i:=1 to q do begin
		readln(x,y);
		kiri:=0; kanan:=j; 
		hasil1:=0; hasil2:=0;
		kipas:=false;
		while  (hasil1=0) and (kiri<=kanan) do begin
			tengah:= (kiri+kanan) div 2;
//			write(kiri,' ',kanan, ' ->> ');
			if (x<B[tengah]) then
				kanan:=tengah-1
			else if (x>B[tengah]) then
				kiri:=tengah+1
			else if(x=B[tengah]) then begin
				hasil1:=tengah;	
				kipas:=true;
			end;
//			writeln(kiri,' ',kanan);
		end;
			if not kipas then begin
				hasil1:=(kiri+kanan)div 2;
			end;
			kiri:=0; kanan:=j;
			kipas:=false;
			
//		writeln(' hasil1 : ',hasil1);
		
		while (hasil2=0) and (kiri<=kanan) do begin
			tengah:= (kiri+kanan) div 2;
//			write(kiri,' ',kanan, ' ->> ');
			if (y<B[tengah]) then
				kanan:=tengah-1
			else if (y>B[tengah]) then
				kiri:=tengah+1
			else if(y=B[tengah]) then begin
				hasil2:=tengah;		
				kipas:=true;
			end;
			
//			writeln(kiri,' ',kanan);
		end;
			if not kipas then begin
				hasil2:=(kiri+kanan)div 2;
			end;
//		writeln('hasil2 : ',hasil2);
		
		
		//if kipas then	
			writeln(A[hasil2]-A[hasil1]);
		///else writeln(hasil2-hasil1-1);
	end;

end.