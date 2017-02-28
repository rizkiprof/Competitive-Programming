var 
min,max,ii,jj,i,d,n,j: longint;
x,y:array[1..1005] of longint;

function pow(a,b:longint):longint;
var ret,i:longint;
begin
	ret:=1;
	for i:=1 to b do
		ret*=a;
	pow:=ret;
end;

procedure dekat(v,w:longint) ;
var ret:longint;
begin
	ret:= pow( abs((x[v]-x[w])) , d) + pow ( abs((y[v]-y[w])) , d);
	if(ret>max) then max:=ret;
	if(ret<min) then min:=ret;
//	writeln(v,' ',w,' ',x[v],y[v],' ',x[w],y[w],' ',max,' ',min,' ',ret);
end;

begin
	min:=10000000;
	max:=0;
	readln(n,d);
	for i :=1 to n do begin
		readln(x[i],y[i]);
	end;
	for i :=1 to n-1 do begin
		for j:=i+1 to n do begin 
			dekat (i, j);
			
		end;
	end;	
	writeln(longint(min),' ',longint(max));
	
end.