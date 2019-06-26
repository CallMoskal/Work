program zzz;
const k=10;
var
  sch, i: integer;
  sum:integer;
  a : array [1..k] of integer;
begin
  sch:=0;
  sum:=0;
  // writeln ('vvtdite k ');
  // read (k);
  for i:=1 to k do begin
    write ('a[', i, ']= ');
    read (a[i]);
    if a[i]<0 then
      sch:=sch+1
    else
      sum+=a[i];
  end;
  writeln ('kollichestvo otrecatelnih =', sch);
  writeln ('summa polojitelnih = ', sum);
  readln(i);
end.
