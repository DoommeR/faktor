procedure InitializeComponent;
    begin
        self.input := new System.Windows.Forms.TextBox();
        self.list := new System.Windows.Forms.ListBox();
        self.button1 := new System.Windows.Forms.Button();
        self.label1 := new System.Windows.Forms.Label();
        self.chislo := new System.Windows.Forms.ListBox();
        self.label2 := new System.Windows.Forms.Label();
        self.sym := new System.Windows.Forms.ListBox();
        self.SuspendLayout();
        // 
        // input
        // 
        self.input.Location := new System.Drawing.Point(12, 94);
        self.input.Name := 'input';
        self.input.Size := new System.Drawing.Size(110, 20);
        self.input.TabIndex := 0;
        // 
        // list
        // 
        self.list.FormattingEnabled := true;
        self.list.Location := new System.Drawing.Point(138, 12);
        self.list.Name := 'list';
        self.list.Size := new System.Drawing.Size(92, 186);
        self.list.TabIndex := 1;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(12, 142);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(103, 42);
        self.button1.TabIndex := 2;
        self.button1.Text := 'считать';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(249, 23);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(98, 37);
        self.label1.TabIndex := 3;
        self.label1.Text := 'Число делителей:';
        // 
        // chislo
        // 
        self.chislo.FormattingEnabled := true;
        self.chislo.Location := new System.Drawing.Point(353, 23);
        self.chislo.Name := 'chislo';
        self.chislo.Size := new System.Drawing.Size(49, 17);
        self.chislo.TabIndex := 4;
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(260, 85);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(87, 25);
        self.label2.TabIndex := 5;
        self.label2.Text := 'Сумма:';
        // 
        // sym
        // 
        self.sym.FormattingEnabled := true;
        self.sym.Location := new System.Drawing.Point(353, 85);
        self.sym.Name := 'sym';
        self.sym.Size := new System.Drawing.Size(49, 17);
        self.sym.TabIndex := 6;
        // 
        // Form2
        // 
        self.ClientSize := new System.Drawing.Size(414, 242);
        self.Controls.Add(self.sym);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.chislo);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.list);
        self.Controls.Add(self.input);
        self.Name := 'Form2';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'Множество';
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
