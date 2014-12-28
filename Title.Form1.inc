procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.label1 := new System.Windows.Forms.Label();
        self.button1 := new System.Windows.Forms.Button();
        self.SuspendLayout();
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(8, 9);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(456, 341);
        self.label1.TabIndex := 0;
        self.label1.Text := resources.GetString('label1.Text');
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(203, 216);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(73, 34);
        self.button1.TabIndex := 1;
        self.button1.Text := 'Хорошо';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(483, 268);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.label1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.SizableToolWindow;
        self.KeyPreview := true;
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'Form1';
        self.ResumeLayout(false);
    end;
