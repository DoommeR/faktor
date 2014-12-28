procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(TT));
        self.label1 := new System.Windows.Forms.Label();
        self.button1 := new System.Windows.Forms.Button();
        self.pictureBox1 := new System.Windows.Forms.PictureBox();
        self.pictureBox2 := new System.Windows.Forms.PictureBox();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox2)).BeginInit();
        self.SuspendLayout();
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(12, 109);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(463, 176);
        self.label1.TabIndex := 0;
        self.label1.Text := resources.GetString('label1.Text');
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(209, 336);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(73, 34);
        self.button1.TabIndex := 1;
        self.button1.Text := 'Хорошо';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // pictureBox1
        // 
        self.pictureBox1.Image := (System.Drawing.Image(resources.GetObject('pictureBox1.Image')));
        self.pictureBox1.Location := new System.Drawing.Point(40, 12);
        self.pictureBox1.Name := 'pictureBox1';
        self.pictureBox1.Size := new System.Drawing.Size(109, 94);
        self.pictureBox1.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox1.TabIndex := 2;
        self.pictureBox1.TabStop := false;
        // 
        // pictureBox2
        // 
        self.pictureBox2.Image := (System.Drawing.Image(resources.GetObject('pictureBox2.Image')));
        self.pictureBox2.InitialImage := (System.Drawing.Image(resources.GetObject('pictureBox2.InitialImage')));
        self.pictureBox2.Location := new System.Drawing.Point(326, 12);
        self.pictureBox2.Name := 'pictureBox2';
        self.pictureBox2.Size := new System.Drawing.Size(109, 94);
        self.pictureBox2.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox2.TabIndex := 3;
        self.pictureBox2.TabStop := false;
        // 
        // TT
        // 
        self.ClientSize := new System.Drawing.Size(474, 393);
        self.Controls.Add(self.pictureBox2);
        self.Controls.Add(self.pictureBox1);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.label1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.SizableToolWindow;
        self.KeyPreview := true;
        self.Name := 'TT';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox2)).EndInit();
        self.ResumeLayout(false);
    end;
