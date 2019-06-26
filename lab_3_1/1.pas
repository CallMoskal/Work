program project1;
var a, b:real;
  n:integer;
  begin
  write ('введите число ');
    read (b);
    for n:=2 to 15 do
      begin
        write ('введите число ');
        read (a);
        if a>b then b:=a
        else break
      end;
    if n=15 then write ('возрастающая последовательность')
    else write ('невозрастающая последовательность');
    read (a);
  end.
