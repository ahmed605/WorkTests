﻿#pragma checksum "C:\projects\WPFSuperJupiter\SuperJupiterViews\WebView.xaml" "{406ea660-64cf-4c82-b6f0-42d48172a799}" "D380BB8BD73D13F9CE7A75E30DDA9F5E"
//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

namespace SuperJupiter.Views
{
    partial class WebView : 
        global::Windows.UI.Xaml.Controls.Page, 
        global::Windows.UI.Xaml.Markup.IComponentConnector,
        global::Windows.UI.Xaml.Markup.IComponentConnector2
    {
        /// <summary>
        /// Connect()
        /// </summary>
        [global::System.CodeDom.Compiler.GeneratedCodeAttribute("Microsoft.Windows.UI.Xaml.Build.Tasks"," 10.0.16.0")]
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
        public void Connect(int connectionId, object target)
        {
            switch(connectionId)
            {
            case 1: // WebView.xaml line 36
                {
                    this.webView1 = (global::Windows.UI.Xaml.Controls.WebView)(target);
                }
                break;
            case 2: // WebView.xaml line 37
                {
                    this.progressRing1 = (global::Windows.UI.Xaml.Controls.ProgressRing)(target);
                }
                break;
            case 3: // WebView.xaml line 30
                {
                    this.addressBox = (global::Windows.UI.Xaml.Controls.TextBox)(target);
                }
                break;
            case 4: // WebView.xaml line 31
                {
                    this.goButton = (global::Windows.UI.Xaml.Controls.Button)(target);
                    ((global::Windows.UI.Xaml.Controls.Button)this.goButton).Click += this.goToWebpage;
                }
                break;
            default:
                break;
            }
            this._contentLoaded = true;
        }

        /// <summary>
        /// GetBindingConnector(int connectionId, object target)
        /// </summary>
        [global::System.CodeDom.Compiler.GeneratedCodeAttribute("Microsoft.Windows.UI.Xaml.Build.Tasks"," 10.0.16.0")]
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
        public global::Windows.UI.Xaml.Markup.IComponentConnector GetBindingConnector(int connectionId, object target)
        {
            global::Windows.UI.Xaml.Markup.IComponentConnector returnValue = null;
            return returnValue;
        }
    }
}
