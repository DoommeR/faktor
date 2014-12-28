{$mainresource hwres.res}
{$apptype windows}
{$reference 'System.Windows.Forms.dll'}
{$reference 'System.Drawing.dll'}
Unit Title;

interface

uses System, System.Drawing, System.Windows.Forms,unit1,pabcsystem;

var log:text;
    t:datetime;

type
  TT = class(Form)
    procedure button1_Click(sender: Object; e: EventArgs);

  {$region FormDesigner}
  private
    {$resource Title.TT.resources}
    label1: &Label;
    pictureBox1: PictureBox;
    pictureBox2: PictureBox;
    button1: Button;
    {$include Title.TT.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure TT.button1_Click(sender: Object; e: EventArgs);
begin
 
  var fo:System.Windows.Forms.Form;
      fo:=new Form1;
      fo.ShowDialog;
      close();
   
end;
begin
  T:=DateTime.Now; 
  assign(log,'logFaktor'+'['+t.Minute.ToString+'].txt');
  append(log);
writeln(log,'                                         МОСКОВСКИЙ АВИАЦИОННЫЙ ИНСТИТУТ ');
writeln(log,'                               (НАЦИОНАЛЬНЫЙ ИССЛЕДОВАТЕЛЬСКИЙ УНИВЕРСИТЕТ "МАИ") ');
writeln(log,'      Факультет №3       "Системы управления, информатика и электроэнергетика" ');
writeln(log,'      Кафедра №308                     "Информационные  технологии " ');
writeln(log,' ');
writeln(log,'                                   Курсовая работа по дискретной математике');
writeln(log,'                                          "Факторизация"');
writeln(log,'Выполнил: Умяров Г.Р. (гр 30-113Б)');
writeln(log,'Преподаватель: доцент, к.т.н Гридин А. Н.');
  writeln(log,' ');
  writeln(log,'[',T,'] >> Программа Factor запущена');
  close(log);
end.