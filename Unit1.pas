{$apptype windows}
{$reference 'System.Windows.Forms.dll'}
{$reference 'System.Drawing.dll'}
Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms,pabcsystem;

var log:text;
    T:=DateTime.Now;
type
  Form1 = class(Form)
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure button3_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource Unit1.Form1.resources}
    button2: Button;
    label1: &Label;
    label2: &Label;
    label3: &Label;
    input: TextBox;
    button1: Button;
    list1: TextBox;
    list: TextBox;
    chislo: TextBox;
    sym: TextBox;
    label5: &Label;
    label4: &Label;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent ;
    end;
  end;

implementation

 var 
  N:=0;
  l,err,i: integer;
  s,ss,ssym,cont:string;
  m:=1;
  sum:=0;
 
procedure closett;
begin
close(log);
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  var m:string;
  assign(log,'logFaktor'+'['+t.Minute.ToString+'].txt');
  append(log);
  writeln(log,' ');
  writeln(log,'введено: '+input.Text);
  writeln(log,'множество делителей: '+list1.Text);
  writeln(log,'множители: '+list.Text);
  writeln(log,'суммма: '+sym.text);
  writeln(log,'число делителей: '+chislo.Text);
  closett;
end;

procedure Form1.button2_Click(sender: Object; e: EventArgs);
begin
  begin

   s:=input.Text;
   val(input.text,L,err);
   
    begin
    cont:='';
    list.Text:='';
    if err>0 then list.Text:=('повторите ввод') else
      begin
      var tet:string;
        i := 2;
        var ysl:=L;
         while i < ysl do begin
           if (L mod i) = 0 then
             begin 
              str(i,tet);
               L := (L div i);
               cont:=cont+'*'+tet;
               n:=n+1;
             end
         else i:=i+1;
         end;
       end;
       var tet:='';
       str(L,tet);
       if (L>1)and (n<>0) then list.text:=list.Text+'*'+tet;
      if (err=0) and (n=0) then list.text:=list.Text+' '+s;
    end; 
  end;
  delete(cont,1,1);
  list.Text:=cont;
   begin
  
  List1.text:='';
  chislo.text:='';
  sym.text:='';
  val(input.text,L,err);
  if err>0 then list1.text:='Повторите ввод'else
  begin
  m:=0;
  sum:=0;
  for var i:=1 to L do
    begin
      if (L mod i)=0 then
        begin
           sum:=sum+i; 
           str(i,s);
           list1.text:=list1.Text+' '+s;
           m:=m+1;
        end;
    end;
  end;
    var mm:string;
    str(m,mm);
    sym.text:=sum.ToString;   
    chislo.Text:=mm;   
   end;

end;

procedure Form1.button3_Click(sender: Object; e: EventArgs);
  begin
  
  
  end;
end.

