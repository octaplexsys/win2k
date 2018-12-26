#include "cabinet.h"
#include "cabwnd.h"
#include "rcids.h"

#include <stdlib.h>
#include <stdio.h>

struct valstr {
    int     val;
    char *  str;
};

#define TABENT(id)  { id, # id },
struct valstr ValStrTab[] = {
    // inc/startids.h
    TABENT(IDM_FILERUN)
    TABENT(IDM_LOGOFF)
    TABENT(IDM_SUSPEND)
    TABENT(IDM_EJECTPC)
    TABENT(IDM_SETTINGSASSIST)
    TABENT(IDM_TRAYPROPERTIES)
    TABENT(IDM_UPDATEWIZARD)
    TABENT(IDM_UPDATE_SEP)
#ifdef _HYDRA_
    TABENT(IDM_MU_DISCONNECT)
    TABENT(IDM_MU_SECURITY)
#endif
    TABENT(IDM_RECENT)
    TABENT(IDM_FIND)
    TABENT(IDM_HELPSEARCH)
    TABENT(IDM_PROGRAMS)
    TABENT(IDM_CONTROLS)
    TABENT(IDM_EXITWIN)
    TABENT(IDM_FAVORITES)
    TABENT(IDM_SETTINGS)
    TABENT(IDM_PRINTERS)
    TABENT(IDM_STARTMENU)
    TABENT(IDM_MYCOMPUTER)
    TABENT(IDM_PROGRAMSINIT)
    TABENT(IDM_RECENTINIT)
#ifdef IDM_FAVORITESINIT
    TABENT(IDM_FAVORITESINIT)
#endif
    TABENT(IDM_MYDOCUMENTS)
    TABENT(IDM_MENU_FIND)
    TABENT(TRAY_IDM_FINDFIRST)
    TABENT(TRAY_IDM_FINDLAST)
#ifdef FEATURE_BROWSEWEB
    TABENT(IDM_MENU_WEB)
#endif

    // explorer/rcids.h
    TABENT(FCIDM_FIRST)
    TABENT(FCIDM_LAST)
    TABENT(FCIDM_TOOLBAR)
    TABENT(FCIDM_STATUS)
    TABENT(FCIDM_DRIVELIST)
    TABENT(FCIDM_TREE)
    TABENT(FCIDM_TABS)
    TABENT(FCIDM_BROWSER_FILE)
    TABENT(FCIDM_FILECLOSE)
    TABENT(FCIDM_PREVIOUSFOLDER)
    TABENT(FCIDM_DELETE)
    TABENT(FCIDM_RENAME)
    TABENT(FCIDM_PROPERTIES)
    TABENT(FCIDM_NEXTCTL)
    TABENT(FCIDM_DROPDRIVLIST)
    TABENT(FCIDM_CONTEXTMENU)
    TABENT(FCIDM_BROWSER_EDIT)
    TABENT(FCIDM_MOVE)
    TABENT(FCIDM_COPY)
    TABENT(FCIDM_LINK)
    TABENT(FCIDM_PASTE)
    TABENT(FCIDM_BROWSER_VIEW)
    TABENT(FCIDM_VIEWMENU)
    TABENT(FCIDM_VIEWTOOLBAR)
    TABENT(FCIDM_VIEWSTATUSBAR)
    TABENT(FCIDM_OPTIONS)
    TABENT(FCIDM_REFRESH)
    TABENT(FCIDM_VIEWITBAR)
    TABENT(FCIDM_VIEWNEW)
    TABENT(FCIDM_BROWSER_TOOLS)
    TABENT(FCIDM_CONNECT)
    TABENT(FCIDM_DISCONNECT)
    TABENT(FCIDM_CONNECT_SEP)
    TABENT(FCIDM_GOTO)
    TABENT(FCIDM_FINDFILES)
    TABENT(FCIDM_FINDCOMPUTER)
    TABENT(FCIDM_MENU_TOOLS_FINDFIRST)
    TABENT(FCIDM_MENU_TOOLS_FINDLAST)
    TABENT(FCIDM_BROWSER_HELP)
    TABENT(FCIDM_HELPSEARCH)
    TABENT(FCIDM_HELPABOUT)
    TABENT(FCIDM_BROWSER_EXPLORE)
    TABENT(FCIDM_NAVIGATEBACK)
    TABENT(FCIDM_NAVIGATEFORWARD)
    TABENT(FCIDM_RECENTMENU)
    TABENT(FCIDM_RECENTFIRST)
    TABENT(FCIDM_RECENTLAST)
    TABENT(FCIDM_FAVS_FIRST)
    TABENT(FCIDM_FAVS_MANAGE)
    TABENT(FCIDM_FAVS_ADDTO)
    TABENT(FCIDM_FAVS_MORE)
    TABENT(FCIDM_FAVS_ITEMFIRST)
    TABENT(FCIDM_FAVS_ITEM)
    TABENT(FCIDM_FAVS_ITEMLAST)
    TABENT(FCIDM_FAVS_LAST)
    TABENT(IDM_CLOSE)
};
#undef TABENT

void PrTab(struct valstr *pvs, int n);

int _cdecl main()
{
    PrTab(ValStrTab, ARRAYSIZE(ValStrTab));
    return 0;
}

void PrTab(struct valstr *pvs, int n)
{
    for (; n > 0; n--, pvs++) {
        printf("%s\t0x%x\r\n", pvs->str, pvs->val);
    }
}