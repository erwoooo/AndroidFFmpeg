package com.example.androidffmpeg;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Example of a call to a native method
        TextView tv = findViewById(R.id.sample_text);
        tv.setText(stringFromJNI() +"\n" + StringForAVcode() + "\n" + StringForAVutil() +"\n"
        + StringForAVformat() + "\n" + StringForAVfilter() + "\n");

    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();

    public native String StringForAVcode();

    public native String StringForAVutil();

    public native String StringForAVformat();

    public native String StringForAVfilter();
}
