/**----------------------------------------------------------------------------

    @file       EditorProjectWin.h
    @defgroup   NimbleLIBIDE Nimble Library IDE Module
    @brief      EditorProjectWin class for the Nimble Library

    @copyright  Neil Bereford 2023

-----------------------------------------------------------------------------*/

#pragma once

//-----------------------------------------------------------------------------
// Include files
// ----------------------------------------------------------------------------

#include "../IDE/IDEWindow.h"
#include "../IDE/IDEEditor.h"
#include "../IDE/IDEButton.h"
#include "../Curses/CursesColour.h"

//-----------------------------------------------------------------------------
// Namespace
// ----------------------------------------------------------------------------

namespace Nimble
{

//-----------------------------------------------------------------------------
// Class definitions
// ----------------------------------------------------------------------------

/**-----------------------------------------------------------------------------
    @ingroup    NimbleLIBIDE Nimble Library IDE Module
    @brief      EditorProjectWin class for the Nimble Library
                Please note that CursesMouse is inherited privately, so that the
                the EditorProjectWin can control the mouse events.
    @return     none
-----------------------------------------------------------------------------*/
class EditorProjectWin : public IDEWindow
{
  public:
    // Enuums -----------------------------------------------------------------
    const uint32_t    WIN_XSIZE        = 30;                 //!< id of the Project window
    const uint32_t    WIN_HEIGHT       = LINES - 8;          //!< height of the Project window
    const uint32_t    WIN_WIDTH        = WIN_XSIZE;          //!< width of the Project window
    const uint32_t    WIN_X            = COLS - WIN_XSIZE;   //!< x position of the Project window
    const uint32_t    WIN_Y            = 4;                  //!< y position of the Project window
    const uint32_t    WIN_INK_COLOUR   = IDE_COL_FG_BLACK;   //!< ink colour of the Project window
    const uint32_t    WIN_PAPER_COLOUR = IDE_COL_BG_WHITE;   //!< paper colour of the Project window
    const std::string WIN_TITLE        = " Project Window "; //!< title of the Project window
    const uint32_t    WIN_TITLE_X      = 2;                  //!< x position of the title of the Project window
    const uint32_t    WIN_TITLE_Y      = 0;                  //!< y position of the title of the Project window
    // Constructor & destructor -----------------------------------------------
    EditorProjectWin();
    ~EditorProjectWin();
    // Public functions -------------------------------------------------------
    // setters ----------------------------------------------------------------
    void setIDEEditor( IDEEditor* editor );
    // display ----------------------------------------------------------------
    void display();

  private:
    // Private constants ------------------------------------------------------
    // Private functions ------------------------------------------------------
    // Private members --------------------------------------------------------
    IDEEditor* m_editor = nullptr; //!< refernece to the editor/IDE
    IDEButton  m_button;           //!< button for the project window
    IDEButton  m_button2;          //!< button for the project window
};

//-----------------------------------------------------------------------------

} // namespace Nimble

//-----------------------------------------------------------------------------
// End of file: EditorProjectWin.h
// ----------------------------------------------------------------------------
