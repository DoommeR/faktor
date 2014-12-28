procedure InitializeComponent;
    begin
        self.b1 := new System.Windows.Forms.Button();
        self.input := new System.Windows.Forms.TextBox();
        self.list := new System.Windows.Forms.ListBox();
        self.SuspendLayout();
        // 
        // b1
        // 
        self.b1.Location := new System.Drawing.Point(37, 150);
        self.b1.Name := 'b1';
        self.b1.Size := new System.Drawing.Size(72, 44);
        self.b1.TabIndex := 0;
        self.b1.Text := 'считать';
        self.b1.UseVisualStyleBackColor := true;
        self.b1.Click += b1_Click;
        // 
        // input
        // 
        self.input.Location := new System.Drawing.Point(33, 91);
        self.input.Name := 'input';
        self.input.Size := new System.Drawing.Size(75, 20);
        self.input.TabIndex := 1;
        // 
        // list
        // 
        self.list.FormattingEnabled := true;
        self.list.Location := new System.Drawing.Point(150, 41);
        self.list.Name := 'list';
        self.list.Size := new System.Drawing.Size(120, 173);
        self.list.TabIndex := 2;
        // 
        // Raz
        // 
        self.ClientSize := new System.Drawing.Size(284, 261);
        self.Controls.Add(self.list);
        self.Controls.Add(self.input);
        self.Controls.Add(self.b1);
        self.Name := 'Raz';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'Разложение';
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
