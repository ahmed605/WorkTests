﻿#pragma checksum "C:\projects\WPFSuperJupiter\SuperJupiterViews\FocusedElementRemovedView.xaml" "{406ea660-64cf-4c82-b6f0-42d48172a799}" "E2DC4B4F9DECA87DEDCA7B84EF302558"
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
    partial class FocusedElementRemovedView : 
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
            case 1: // FocusedElementRemovedView.xaml line 10
                {
                    this.grid = (global::Windows.UI.Xaml.Controls.Grid)(target);
                }
                break;
            case 2: // FocusedElementRemovedView.xaml line 11
                {
                    this.sp = (global::Windows.UI.Xaml.Controls.StackPanel)(target);
                }
                break;
            case 3: // FocusedElementRemovedView.xaml line 16
                {
                    this.spB = (global::Windows.UI.Xaml.Controls.StackPanel)(target);
                }
                break;
            case 4: // FocusedElementRemovedView.xaml line 17
                {
                    this.focusButtonA = (global::Windows.UI.Xaml.Controls.Button)(target);
                    ((global::Windows.UI.Xaml.Controls.Button)this.focusButtonA).Click += this.Recreate;
                }
                break;
            case 5: // FocusedElementRemovedView.xaml line 18
                {
                    this.focusButtonB = (global::Windows.UI.Xaml.Controls.Button)(target);
                    ((global::Windows.UI.Xaml.Controls.Button)this.focusButtonB).Click += this.Recreate;
                }
                break;
            case 6: // FocusedElementRemovedView.xaml line 13
                {
                    this.deleteMe = (global::Windows.UI.Xaml.Controls.Button)(target);
                    ((global::Windows.UI.Xaml.Controls.Button)this.deleteMe).Click += this.DeleteMe;
                }
                break;
            case 7: // FocusedElementRemovedView.xaml line 14
                {
                    this.deleteMeB = (global::Windows.UI.Xaml.Controls.Button)(target);
                    ((global::Windows.UI.Xaml.Controls.Button)this.deleteMeB).Click += this.DeleteMe;
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

