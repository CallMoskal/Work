program project1;
var x, y, r, n, x_c, y_c:integer;

  begin
    n:=0;
    write ('������� ࠤ��� r ');
    readln (r);
    write ('������� ���न���� 業��� ');
    readln (x_c, y_c);
    for x:=1 to r do
      for y:=1 to r do
        if ((x*x)+(y*y)<=r*r) then
          n:=n+1;
    n:=(4*n)+(4*r)+1;
    writeln ('�ᥣ� ��祪 � ��㣥 ', n);
    readln ();
    end.
