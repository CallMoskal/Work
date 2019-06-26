program zzz;
const k=3;
var
i: integer;
a : array [1..2*k] of integer;
b : array [1..2*k] of integer;
begin
for i:=1 to 2*k do begin
  write ('a[', i, ']=');
  read (a[i]);
end;
b[1]:=a[2*k];
for i:=1 to 2*k do begin
  b[i]:=a[i-1];
  writeln ('a[', i, ']=', b[i]);
end;
readln(i);
end.
