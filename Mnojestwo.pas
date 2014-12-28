Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form2 = class(Form)
    procedure button1_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource Unit1.Form1.resources}
    button1: Button;
    input: TextBox;
    menuStrip1: MenuStrip;
    list: ListBox;
    label1: &Label;
    toolStripMenuItem1: ToolStripMenuItem;
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
  m:=1;
  L,err: integer;
  args:array [1..100] of integer;
  s:string;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  List.Text:='';
 val(input.text,L,err);
  for var i:=1 to L do
    begin
      if (L mod i)=0 then
        begin
          args[m]:=i;
          m:=m+1;
        end;
    end;
      for var i:=2 to m do begin
        str(args[i-1],s);
       list.Items.Add(s);
      end;
 
end;

end.
