program project1;
var a, b:real;
  n:integer;
  begin
  write ('������ �᫮ ');
    read (b);
    for n:=2 to 15 do
      begin
        write ('������ �᫮ ');
        read (a);
        if a>b then b:=a
        else break
      end;
    if n=15 then write ('��������� ��᫥����⥫쭮���')
    else write ('����������� ��᫥����⥫쭮���');
    read (a);
  end.
