program project1;
var eps, x_f:double;
    n, x: integer;

    function fact(n:integer):longint;
    begin
    if n=1 then fact:=1
             else fact:=fact(n-1)*n;
    end;

begin
  write ('vvedite x ');
  read (x);
  eps:=0.0001;
  x_f:=1;
  n:=3;
  while ((exp(ln(x) * n)/fact(n))>eps) do
    begin
      x_f:=x_f+(exp(ln(x) * n))/fact(n);
      n:=n+2;
    end;
  writeln (x_f);
  read(x);
end.
