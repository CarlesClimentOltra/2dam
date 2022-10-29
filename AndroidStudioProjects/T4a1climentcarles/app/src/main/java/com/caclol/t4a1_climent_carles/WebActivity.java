package com.caclol.t4a1_climent_carles;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.webkit.WebView;
import android.webkit.WebViewClient;

public class WebActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_web);

        WebView wvWiki = (WebView) findViewById(R.id.wvWiki);
        String url = this.getIntent().getStringExtra("url");
        wvWiki.setWebViewClient(new WebViewClient());
        wvWiki.loadUrl(url);

    }
}