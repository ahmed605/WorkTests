﻿#pragma checksum "C:\projects\WPFSuperJupiter\SuperJupiterViews\CaptureElementView.xaml" "{406ea660-64cf-4c82-b6f0-42d48172a799}" "CAB815CCD7CD87B70A708F0FE89ECE86"
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
    partial class CaptureElementView : 
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
            case 1: // CaptureElementView.xaml line 21
                {
                    this.videoButton = (global::Windows.UI.Xaml.Controls.Button)(target);
                    ((global::Windows.UI.Xaml.Controls.Button)this.videoButton).Click += this.showVideo;
                }
                break;
            case 2: // CaptureElementView.xaml line 22
                {
                    this.stopButton = (global::Windows.UI.Xaml.Controls.Button)(target);
                    ((global::Windows.UI.Xaml.Controls.Button)this.stopButton).Click += this.stopVideo;
                }
                break;
            case 3: // CaptureElementView.xaml line 24
                {
                    this.exceptionText = (global::Windows.UI.Xaml.Controls.TextBlock)(target);
                }
                break;
            case 4: // CaptureElementView.xaml line 17
                {
                    this.myCaptureElement = (global::Windows.UI.Xaml.Controls.CaptureElement)(target);
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

