#pragma once;

#include "UIElement.h"
#include "charting/ItemsSource.h"

#include <memory>

namespace zlx
{
    namespace ui
    {      
        class Chart : public UIElement
        {
        public:
            explicit Chart(Box2 bounding_box_) : UIElement(bounding_box_) { }
            ~Chart() { }

            //From UIElement:
            Size2 measure(const Size2& available_size) override;

            Size2 arrange(const Size2& available_size) override;

            void draw() override;

            size_t total_children_count() override
            {
                return 1;
            }

            //Chart-specific:



            std::shared_ptr<charting::ItemsSourceBase> items_source;
        };
    }
}