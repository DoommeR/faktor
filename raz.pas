{$apptype windows}
{$reference 'System.Windows.Forms.dll'}
{$reference 'System.Drawing.dll'}
Unit raz;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Razz = class(Form)
    procedure b1_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource raz.Raz.resources}
    b1: Button;
    input: TextBox;
    list: ListBox;
    {$include raz.Raz.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;



implementation

 var 
  N:=0;
  L,err,i: integer;
  s,ss:string;

procedure Razz.b1_Click(sender: Object; e: EventArgs);
begin
   List.Items.Clear;
   s:=input.Text;
   val(input.text,L,err);
   
   
    begin
      if err>0 then list.Items.Add('повторите ввод') else
      begin
        i := 2;
        list.Items.Add(1);
         while i < 10 do begin
           if (L mod i) = 0 then
             begin 
               L := (L div i);
               list.items.add(i);
               n:=n+1;
             end
         else i:=i+1;
         end;
       end;
       if (L>1)and (n<>0) then list.items.add(L);
      if (err=0) and (n=0) then list.Items.Add(s);
    end; 
end;
end.
