/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Applet.java to edit this template
 */
//package javaapplication1;

import java.applet.*;
import java.awt.*;
import java.awt.event.*;
//Create applet button

/**
 *
 * @author Dhanur
 */
class NewApplet3 extends Applet implements ActionListener {

    Button b1, b2;
    TextField text;

    /**
     * Initialization method that will be called after the applet is loaded into
     * the browser.
     */
    public void init() {
        Button btn = new Button("Click here");
        btn.setForeground(Color.GREEN);
        add(btn);
        setLayout(new FlowLayout());
        text = new TextField();
        int size = 30;
        text.getMinimumSize(size);
        b1 = new Button("Hello Click Here");
        b2 = new Button(/* "2nd Button " */);
        b2.setLabel("2nd button");
        add(b1);
        add(b2);
        add(text);
        b1.addActionListener(this);
        b2.addActionListener(this);
        // TODO start asynchronous download of heavy resources
    }

    public void actionPerformed(ActionEvent eve) {
        if (eve.getSource() == b1) // .setText();
        {
            text.setText("Button b1 clicked");
        }
        if (eve.getSource() == b2) // .setText();
        {
            text.setText("Button b2 clicked");
        }
    }
    // TODO overwrite start(), stop() and destroy() methods
}
