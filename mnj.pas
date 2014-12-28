{$apptype windows}
{$reference 'System.Windows.Forms.dll'}
{$reference 'System.Drawing.dll'}
Unit mnj;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form2 = class(Form)
    procedure button1_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource mnj.Form2.resources}
    input: TextBox;
    list: ListBox;
    label1: &Label;
    chislo: ListBox;
    label2: &Label;
    sym: ListBox;
    button1: Button;
    {$include mnj.Form2.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation
 var 
  m:=0;
  sum:=0;
  L,err: integer;
  s,ssym:string;
procedure Form2.button1_Click(sender: Object; e: EventArgs);
begin
  begin

  List.Items.Clear;
  chislo.Items.Clear;
  val(input.text,L,err);
  if err>0 then list.Items.Add('Повторите ввод')else
  begin
  for var i:=1 to L do
    begin
      if (L mod i)=0 then
        begin
           sum:=sum+i;
           str(sum,ssym);
           str(i,s);
           list.Items.Add(s);
           m:=m+1;
        end;
    end;
  end;   
   sym.Items.Add(ssym);   
   chislo.Items.Add(m);   
   end;
 
end;

end.
