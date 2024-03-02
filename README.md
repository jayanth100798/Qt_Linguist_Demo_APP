# Qt_Linguist_Demo_APP
The Qt Linguist Language Demo App showcases the power and flexibility of Qt's internationalization (i18n) and localization (l10n) features using Qt Linguist. This lightweight application provides a practical demonstration of how developers can seamlessly integrate multi-language support into their Qt-based projects.

![image](https://github.com/jayanth100798/Qt_Linguist_Demo_APP/assets/99641403/6324331c-0de7-41cf-b225-3e765d9b2735)


Using Qt Linguist for Localization
Qt Linguist is a powerful tool for managing translations in Qt applications. It includes two essential commands: lupdate and lrelease, which are used to update and compile translation files respectively.

1. lupdate Command
The lupdate command scans your source code for translatable strings and updates the corresponding translation files.

lupdate <source_files> -ts <output_translation_file>
<source_files>: Specifies the source files or directories to scan for translatable strings.
-ts <output_translation_file>: Specifies the output translation file where the translatable strings will be updated.
Example:
lupdate src/ -ts translations/myapp_en.ts
This command updates the translation file myapp_en.ts with any translatable strings found in the src/ directory.

2. lrelease Command
The lrelease command compiles translation files (.ts) into binary files (.qm) that can be loaded by Qt-based applications.

lrelease <input_translation_file> -qm <output_binary_file>
<input_translation_file>: Specifies the input .ts translation file(s) to compile into binary .qm format.
-qm <output_binary_file>: Specifies the output binary file where the compiled translation will be saved.
Example:
lrelease translations/myapp_en.ts -qm translations/myapp_en.qm
This command compiles the myapp_en.ts translation file into a binary myapp_en.qm file.

Tips
Always run lupdate before lrelease to ensure your translation files are up to date.
Remember to include the compiled .qm files with your application for runtime language switching.
For more information and advanced usage, refer to the Qt Linguist documentation.



![image](https://github.com/jayanth100798/Qt_Linguist_Demo_APP/assets/99641403/72179bb2-1404-4005-b90d-d79e1f78120b)
