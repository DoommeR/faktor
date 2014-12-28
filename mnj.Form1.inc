procedure InitializeComponent;
    begin
        self.input := new System.Windows.Forms.TextBox();
        self.list := new System.Windows.Forms.ListBox();
        self.button1 := new System.Windows.Forms.Button();
        self.SuspendLayout();
        // 
        // input
        // 
        self.input.Location := new System.Drawing.Point(35, 82);
        self.input.Name := 'input';
        self.input.Size := new System.Drawing.Size(110, 20);
        self.input.TabIndex := 0;
        // 
        // list
        // 
        self.list.FormattingEnabled := true;
        self.list.Location := new System.Drawing.Point(177, 52);
        self.list.Name := 'list';
        self.list.Size := new System.Drawing.Size(92, 186);
        self.list.TabIndex := 1;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(41, 152);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(103, 42);
        self.button1.TabIndex := 2;
        self.button1.Text := 'считать';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(284, 261);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.list);
        self.Controls.Add(self.input);
        self.Name := 'Form1';
        self.Text := 'Множество';
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
