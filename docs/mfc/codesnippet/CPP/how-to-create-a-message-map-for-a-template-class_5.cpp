BEGIN_TEMPLATE_MESSAGE_MAP(CSyncListBox, CollectionT, CListBox)
   ON_WM_PAINT()
   ON_WM_DESTROY()
   ON_MESSAGE(LBN_SYNCHRONIZE, OnSynchronize)
   END_MESSAGE_MAP()