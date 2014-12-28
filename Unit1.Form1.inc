procedure InitializeComponent;
    begin
        self.button2 := new System.Windows.Forms.Button();
        self.label1 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.label3 := new System.Windows.Forms.Label();
        self.label4 := new System.Windows.Forms.Label();
        self.input := new System.Windows.Forms.TextBox();
        self.button1 := new System.Windows.Forms.Button();
        self.list1 := new System.Windows.Forms.TextBox();
        self.list := new System.Windows.Forms.TextBox();
        self.chislo := new System.Windows.Forms.TextBox();
        self.sym := new System.Windows.Forms.TextBox();
        self.label5 := new System.Windows.Forms.Label();
        self.SuspendLayout();
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(175, 147);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(84, 30);
        self.button2.TabIndex := 1;
        self.button2.Text := 'Пуск!';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(7, 216);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(119, 17);
        self.label1.TabIndex := 5;
        self.label1.Text := 'Разложение';
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(7, 274);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(122, 17);
        self.label2.TabIndex := 7;
        self.label2.Text := 'Множество делителей';
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(21, 330);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(112, 17);
        self.label3.TabIndex := 10;
        self.label3.Text := 'Число делителей:';
        // 
        // label4
        // 
        self.label4.Location := new System.Drawing.Point(73, 359);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(56, 17);
        self.label4.TabIndex := 11;
        self.label4.Text := 'Сумма:';
        // 
        // input
        // 
        self.input.Location := new System.Drawing.Point(152, 104);
        self.input.Name := 'input';
        self.input.Size := new System.Drawing.Size(132, 20);
        self.input.TabIndex := 12;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(346, 363);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(99, 30);
        self.button1.TabIndex := 13;
        self.button1.Text := 'записать в лог';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // list1
        // 
        self.list1.Location := new System.Drawing.Point(12, 294);
        self.list1.Multiline := true;
        self.list1.Name := 'list1';
        self.list1.Size := new System.Drawing.Size(398, 20);
        self.list1.TabIndex := 14;
        // 
        // list
        // 
        self.list.Location := new System.Drawing.Point(12, 245);
        self.list.Name := 'list';
        self.list.Size := new System.Drawing.Size(397, 20);
        self.list.TabIndex := 15;
        // 
        // chislo
        // 
        self.chislo.Location := new System.Drawing.Point(130, 334);
        self.chislo.Name := 'chislo';
        self.chislo.Size := new System.Drawing.Size(113, 20);
        self.chislo.TabIndex := 16;
        // 
        // sym
        // 
        self.sym.Location := new System.Drawing.Point(133, 363);
        self.sym.Name := 'sym';
        self.sym.Size := new System.Drawing.Size(109, 20);
        self.sym.TabIndex := 17;
        // 
        // label5
        // 
        self.label5.Location := new System.Drawing.Point(152, 70);
        self.label5.Name := 'label5';
        self.label5.Size := new System.Drawing.Size(136, 20);
        self.label5.TabIndex := 18;
        self.label5.Text := 'Введите число';
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(458, 409);
        self.Controls.Add(self.label5);
        self.Controls.Add(self.sym);
        self.Controls.Add(self.chislo);
        self.Controls.Add(self.list);
        self.Controls.Add(self.list1);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.input);
        self.Controls.Add(self.label4);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.button2);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedSingle;
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'Faktor v2.1 by DoommeR';
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
